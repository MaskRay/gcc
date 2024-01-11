/* { dg-do compile } */

extern int var;

void
func (void)
{
  __asm__ ("@ %p0" : : "z" (func));
  __asm__ ("@ %p0" : : "z" (&var + 1));
}

/* { dg-final { scan-assembler "@ func" } } */
/* { dg-final { scan-assembler "@ var\\+4" } } */
