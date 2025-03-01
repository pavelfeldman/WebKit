/*
 * Copyright (C) 2022 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

#include "AbstractFrameView.h"

namespace WebCore {

class RemoteFrame;

class RemoteFrameView final : public AbstractFrameView {
public:
    static Ref<RemoteFrameView> create(RemoteFrame& frame) { return adoptRef(*new RemoteFrameView(frame)); }

    FrameViewType viewType() const final { return FrameViewType::Remote; }
private:
    WEBCORE_EXPORT RemoteFrameView(RemoteFrame&);

    void invalidateRect(const IntRect&) final;
    bool isActive() const final;
    bool forceUpdateScrollbarsOnMainThreadForPerformanceTesting() const final;
    ScrollableArea* enclosingScrollableArea() const final;
    bool isScrollableOrRubberbandable() final;
    bool hasScrollableOrRubberbandableAncestor() final;
    IntRect scrollableAreaBoundingBox(bool*) const final;
    bool shouldPlaceVerticalScrollbarOnLeft() const final;
    void invalidateScrollbarRect(Scrollbar&, const IntRect&) final;
    HostWindow* hostWindow() const final;
    IntRect windowClipRect() const final;
    void paintContents(GraphicsContext&, const IntRect& damageRect, SecurityOriginPaintPolicy, EventRegionContext*) final;
    void addedOrRemovedScrollbar() final;
    void delegatedScrollingModeDidChange() final;
    void updateScrollCorner() final;
    bool scrollContentsFastPath(const IntSize& scrollDelta, const IntRect& rectToScroll, const IntRect& clipRect) final;
    bool isVerticalDocument() const final;
    bool isFlippedDocument() const final;
    bool shouldDeferScrollUpdateAfterContentSizeChange() final;
    void scrollOffsetChangedViaPlatformWidgetImpl(const ScrollOffset&, const ScrollOffset&) final;
    void unobscuredContentSizeChanged() final;
    void didFinishProhibitingScrollingWhenChangingContentSize() final;
    void updateLayerPositionsAfterScrolling() final;
    void updateCompositingLayersAfterScrolling() final;

    const Ref<RemoteFrame> m_frame;
};

}

SPECIALIZE_TYPE_TRAITS_BEGIN(WebCore::RemoteFrameView)
static bool isType(const WebCore::AbstractFrameView& view) { return view.viewType() == WebCore::AbstractFrameView::FrameViewType::Remote; }
SPECIALIZE_TYPE_TRAITS_END()
