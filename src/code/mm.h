#ifndef X64_SRC_OPERANDS_MM_REG_H
#define X64_SRC_OPERANDS_MM_REG_H

#include "src/operands/operand.h"

namespace x64 {

/** An MMX register. The 64-bit MMX registers are: MM0 through MM7. */
class Mm : public Operand {
	public:
		inline Mm(uint64_t val) : Operand{val} { }
};

} // namespace x64

#endif
