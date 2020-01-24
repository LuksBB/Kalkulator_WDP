#include "ONP.h"
#include <string>
#include <stack>
#include "Algorytmy.h"

using namespace std;

int ONP::waga(char c) //okresla wage dzialan
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

void ONP::InfixToPostfix(string s)
{
    //Tworzymy stos i zmienna , ktora bedzie nowa zmienna typu string
    //Do stosu dodajemy 'N' , co bedzie oznaczalo "dno" stosu
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
                ns += c;
            }
            if (st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }

        //Jesli znak jest operatorem
        else {
            while (st.top() != 'N' && waga(s[i]) <= waga(st.top()))
            {
                char c = st.top();
                st.pop();
                ns += c;
            }
            st.push(s[i]);
        }

    }
    //Usuwa wszystkie pozostale elementy ze stosu
    while (st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ns += c;
    }
}
