char* ft_strrchr(const char* string, int firstOccurenceOfCharacter)
{
    const char* lastOccurrence = NULL;
        if (*string == firstOccurenceOfCharacter) {
            lastOccurrence = string;
        }
        string++;
    }
    return (char*)lastOccurrence;
}