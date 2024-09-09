int my_round(float n)
{
    int cons = n;
    float dv = n - cons;
    if (n >= 0)
    {
        if (dv >= 0.5)
        {
            return cons + 1;
        }
        return cons;
    }
    else
    {
        if (dv =< -0.5)
        {
            return cons - 1;
        }
        return cons;
    }
}
