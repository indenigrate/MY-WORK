#include <bits/stdc++.h>
using namespace std;

int solve(vector <int>A, int n1, int B) {
    int T=0;
    int count=0;
    for(int i=0;i<n1;i++){
        T=A[i];
        if(T==B)
            count++;
        for(int j=i+1;j<n1;j++){
            T^=A[j];
            if(T==B)
                count++;
                
        }
    }
    return count;
}
int main()
{
    cout<<solve({4,2,2,6,4},5,6);
        return 0;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (vector<int> i : matrix)
    {
        for (int j : i)
            cout << j << " ";
    }
    cout << endl;
    int top = 0, left = 0, right = matrix[0].size() - 1, bottom = matrix.size() - 1;
    int i = 0, j = 0;
    vector<int> ans;
    ans.push_back(matrix[0][0]);
    while (top <= bottom && left <=right)
    {
        while (j + 1 <= right)
        {
            j++;
            ans.push_back(matrix[i][j]);
        }
        top++;
        while (i + 1 <= bottom)
        {
            i++;
            ans.push_back(matrix[i][j]);
        }
        right--;
        while (j - 1 >= left)
        {
            j--;
            ans.push_back(matrix[i][j]);
        }
        bottom--;
        while (i - 1 >= top)
        {
            i--;
            ans.push_back(matrix[i][j]);
        }
        left++;
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
}