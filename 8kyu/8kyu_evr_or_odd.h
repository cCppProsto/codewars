#ifndef 8KYU_EVR_OR_ODD_H
#define 8KYU_EVR_OR_ODD_H

const char * even_or_odd(int number)
{
  return number & 0x01 ? "Odd" : "Even";
}
#endif // 8KYU_EVR_OR_ODD_H
