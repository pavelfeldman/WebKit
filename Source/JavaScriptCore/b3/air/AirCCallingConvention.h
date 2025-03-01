/*
 * Copyright (C) 2016 Apple Inc. All rights reserved.
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

#if ENABLE(B3_JIT)

#include "AirArg.h"
#include "AirInst.h"
#include "B3Type.h"
#include <wtf/Vector.h>

namespace JSC { namespace B3 {

class CCallValue;

namespace Air {

class Code;

Vector<Arg> computeCCallingConvention(Code&, CCallValue*);

size_t cCallResultCount(CCallValue*);

/*
 * On some platforms (well, on 32-bit platforms,) C functions can take arguments
 * that need more than one Air::Arg to pass around. These functions serve as a
 * source of truth about how args of a CCallValue must be represented by the time we
 * lower to Air.
 */

// Return the number of Air::Args needed to marshall this Value to the C function
size_t cCallArgumentRegisterCount(const Value*);
// Return the width of the individual Air::Args needed to marshall this value
Width cCallArgumentRegisterWidth(const Value*);

Tmp cCallResult(CCallValue*, unsigned);

Inst buildCCall(Code&, Value* origin, const Vector<Arg>&);

} } } // namespace JSC::B3::Air

#endif // ENABLE(B3_JIT)
