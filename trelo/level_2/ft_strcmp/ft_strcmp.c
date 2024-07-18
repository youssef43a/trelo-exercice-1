int    ft_strcmp(char *s1, char *s2)
{
    int i;
    int j;
    int cmp;

    cmp = 0;
    i = 0;
    j = 0;
    while (s1[i] && s2[j] && s1[i] == s2[j])
    {
        i++;
        j++; 
    }
    cmp = s1[i] - s2[j];
    return cmp;
}