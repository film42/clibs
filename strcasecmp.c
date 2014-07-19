// Found: ftp://ftp.tex.ac.uk/pub/archive/systems/luatex/base/source/texk/kpathsea/strcasecmp.c

int strcasecmp (const char *s1, const char *s2) {
  register const unsigned char *p1 = (const unsigned char *) s1;
  register const unsigned char *p2 = (const unsigned char *) s2;
  unsigned char c1, c2;

  if (p1 == p2)
    return 0;

  do
    {
      c1 = tolower (*p1++);
      c2 = tolower (*p2++);
      if (c1 == '\0')
        break;
    }
  while (c1 == c2);

  return c1 - c2;
}
