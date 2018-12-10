int Solution::braces(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len = A.length();
    stack<char> st;
    for(int i=0;i<len;i++)
    {
        if(A[i]=='(')st.push(A[i]);
        else if(A[i]==')')
        {
            if(st.top() == '(')return 1;
            bool cnt = 0;
            while(st.top() != '(')
            {
                if(st.top()=='+' ||st.top()=='-' ||st.top()=='*' ||st.top()=='/')cnt = 1;
                st.pop();
            }
            if(!cnt)return 1;
            st.pop();
        }
        else st.push(A[i]);
        
    }
    while(!st.empty())
    {
        if(st.top()=='(')return 1;
        st.pop();
    }
    return 0;
}
