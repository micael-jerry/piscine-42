#define ABS(value) ({ \
  int result; \
  if (value < 0) { \
    result = -value; \
  } else { \
    result = value; \
  } \
  result; \
})
