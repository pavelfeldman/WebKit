/*
 * Copyright (C) 2019 Apple Inc. All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

#if ENABLE(ASYNC_SCROLLING)

#include "ScrollingTreeOverflowScrollProxyNode.h"

namespace WebCore {

class ScrollingTreeOverflowScrollProxyNodeCocoa : public ScrollingTreeOverflowScrollProxyNode {
public:
    WEBCORE_EXPORT static Ref<ScrollingTreeOverflowScrollProxyNodeCocoa> create(ScrollingTree&, ScrollingNodeID);
    WEBCORE_EXPORT virtual ~ScrollingTreeOverflowScrollProxyNodeCocoa();

protected:
    WEBCORE_EXPORT ScrollingTreeOverflowScrollProxyNodeCocoa(ScrollingTree&, ScrollingNodeID);

    void commitStateBeforeChildren(const ScrollingStateNode&) override;
    void applyLayerPositions() override;

    CALayer* layer() const override { return m_layer.get(); }

    RetainPtr<CALayer> m_layer;
};

} // namespace WebCore

SPECIALIZE_TYPE_TRAITS_SCROLLING_NODE(ScrollingTreeOverflowScrollProxyNodeCocoa, isOverflowScrollProxyNodeCocoa())

#endif // ENABLE(ASYNC_SCROLLING)
