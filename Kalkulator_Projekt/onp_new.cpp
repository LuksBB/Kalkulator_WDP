int waga(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}


string infixToPostfix(string s)
{
    stack <char> st;
    st.push('N');
    int l = s.length();
    string ns;
    for (int i = 0; i < l; i++)
    {
        // Jesli element nalezy do zbioru <1;9> dodaje go do nowego stringa
        if (s[i] >= '1' && s[i] <= '9')
            ns += s[i];

        // Jesli element jest '(' dodaje go do stosu
        else if (s[i] == '(')

            st.push('(');

        //Jesli znak jest ')', to zrzuca ze stosu i dodaje do nowego stringa az nie natrafi na '('
        else if (s[i] == ')')
        {
            while (st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                ns += " ";
                ns += c;
            }
            if (st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
        //Je¿eli natrafi na operator
        else {
            ns += " ";
            while (st.top() != 'N' && waga(s[i]) <= waga(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
                ns += " ";
            }
            st.push(s[i]);
        }

    }
    //Wyrzucenie wszystkich pozosta³ych elementów ze stosu
    while (st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += " ";
        ns += c;
    }
    return ns;
}

//Tu wykonywane s¹ obliczenia na postaci postfiksowej
double onp(const std::string& wyr_onp) {
    stack <char> st;
    st.push('N');
    char cstr[wyr_onp.size() + 1];
    strcpy(cstr, wyr_onp.c_str());
    int liczba;
    string strliczba = "";
    string pojedyncza;
    int j = 0;
    for (int i = 0; i < sizeof(cstr); i++) {
        char znak = cstr[i];
        while (znak != ' ') {
            strliczba += cstr[i];
            i++;
        }
        double k = atof(strliczba.c_str());
        st.push(k);
    }
    return 0;

}
