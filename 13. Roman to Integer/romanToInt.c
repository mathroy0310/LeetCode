int romanToInt(char * s)
{
    int res;
    int i;

    int t['X' + 1] = {
        ['I'] = 1,
        ['V'] = 5,
        ['X'] = 10,
        ['L'] = 50,
        ['C'] = 100,
        ['D'] = 500,
        ['M'] = 1000,
    };

    res = 0;
    i = -1;

    while (s[++i])
    {
        if (t[s[i]] < t[s[i + 1]])
            res -= t[s[i]];
        else
            res += t[s[i]];
    }
    return res;
}