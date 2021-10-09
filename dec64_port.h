#ifdef _MSC_VER

static int __builtin_clzll(unsigned long x)
{
    unsigned long index;
    if (_BitScanForward64(&index, x)) {
        return index;
    }
    return 0;
}

#endif
