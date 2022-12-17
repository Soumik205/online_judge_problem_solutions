#include <bits/stdc++.h>

using namespace std;

int main()
{
    int danil = 0;
    int olya = 0;
    int slava = 0;
    int ann = 0;
    int nikita = 0;
    int count = 0;

    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'D' && str[i + 1] == 'a' && str[i + 2] == 'n' && str[i + 3] == 'i' && str[i + 4] == 'l')
        {
            danil++;
            count += danil;
        }
        else if (str[i] == 'O' && str[i + 1] == 'l' && str[i + 2] == 'y' && str[i + 3] == 'a')
        {
            olya++;
            count += olya;
        }
        else if (str[i] == 'S' && str[i + 1] == 'l' && str[i + 2] == 'a' && str[i + 3] == 'v' && str[i + 4] == 'a')
        {
            slava++;
            count += slava;
        }
        else if (str[i] == 'A' && str[i + 1] == 'n' && str[i + 2] == 'n')
        {
            ann++;
            count += ann;
        }
        else if (str[i] == 'N' && str[i + 1] == 'i' && str[i + 2] == 'k' && str[i + 3] == 'i' && str[i + 4] == 't' && str[i + 5] == 'a')
        {
            nikita++;
            count += nikita;
        }
    }

    if (danil == 0 && olya == 0 && slava == 0 && ann == 0 && nikita == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (danil > 1 || olya > 1 || slava > 1 || ann > 1 || nikita > 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (count > 1)
    {
        cout << "NO" << endl;
        return 0;
    }


    cout << "YES" << endl;
    return 0;
}
