#define ABS(Value) ({ \
  int res; \
  if (Value < 0) { \
    res = -Value; \
  } else { \
    res = Value; \
  } \
  res; \
})
