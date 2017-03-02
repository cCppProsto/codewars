#ifndef 8KYU_MAKEUPPERCASE_H
#define 8KYU_MAKEUPPERCASE_H

char *makeUpperCase (char *string)
{
  unsigned i   = 0;
  while(string[i])
  {
    string[i] += string[i] >= 'a' && string[i] <= 'z' ? -32 : 0;
    ++i;
  }
  return string;
}

#endif // 8KYU_MAKEUPPERCASE_H
