#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void Nishat()
{
    int a[25], b, c, d, e, f, g, h, t, i, j, k, l, m, n;
    int ans_1, cnt_1 = 0, flag_1;
    double aa, bb, cc, dd, ee;
    char aaa[25], bbb[25], ccc[25], ddd[25];
    string spc, in, keyword[25], store;
    k = flag_1 = 0;
    gets(aaa);
    l = strlen(aaa);
    for(i=0; i<l; i++)
    {
        if(aaa[i]!=' ')
        {
            store += aaa[i];
            if(!flag_1)
                flag_1 = 1, j = i;
        }
        else if(aaa[i]==' ')
        {
            flag_1 = 0;
            if(store=="long" || store=="int" || store=="double" || store=="float")
                k++, keyword[k] = store;
            else
                break;
            store.clear();
        }
    }
    cout<<"Keyword ("<<k<<"): ";
    for(i=1; i<=k; i++)
    {
        if(i!=k)
            cout<<keyword[i]<<", ";
        else
            cout<<keyword[i]<<nl;
    }

    b = k = 0;
    set <char> st;
    set <char> :: iterator itr;
    for(i=j; i<l; i++)
    {
        if(aaa[i]>='a' && aaa[i]<='z')
            st.insert(aaa[i]);
        else if(aaa[i]=='+' || aaa[i]=='-' || aaa[i]=='*' || aaa[i]=='/' || aaa[i]=='=')
            k++, ccc[k] = aaa[i];
        else if(aaa[i]==';' || aaa[i]==',' || aaa[i]==':')
            b++, ddd[b] = aaa[i];
    }
    c = st.size();
    if(c!=0)
    {
        cout<<"Variable ("<<c<<"): ";
        for(itr=st.begin(); itr!=st.end(); itr++)
        {
            cnt_1++;
            if(cnt_1!=c)
                cout<<*itr<<", ";
            else
                cout<<*itr<<nl;
        }
    }
    if(k!=0)
    {
        cout<<"Operator ("<<k<<"): ";
        for(i=1; i<=k; i++)
        {
            if(i!=k)
                cout<<ccc[i]<<", ";
            else
                cout<<ccc[i]<<nl;
        }
    }
    if(b!=0)
    {
        cout<<"Punctuation ("<<b<<"): ";
        for(i=1; i<=b; i++)
        {
            if(i!=b)
                cout<<ddd[i]<<", ";

            else
                cout<<ddd[i]<<nl;
        }
    }
    j = ans_1 = k = 0;
    for(i=l-1; i>=0; i--)
    {
        if(aaa[i]>='0' && aaa[i]<='9')
        {
            aa = pow(10,j);
            b = aa;
            ans_1 += (aaa[i] - 48) * b;
            j++;
        }
        else
        {
            j = 0;
            if(ans_1)
                k++, a[k] = ans_1;
            ans_1 = 0;
        }
    }
    if(k!=0)
    {
        cout<<"Constant ("<<k<<"): ";
        for(i=1; i<=k; i++)
        {
            if(i!=k)
                cout<<a[i]<<",";
            else
                cout<<a[i]<<nl;
        }
    }
    return;
}

int main()
{
    Nishat();
    return 0;
}
