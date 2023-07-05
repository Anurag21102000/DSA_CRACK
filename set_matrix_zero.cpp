#include <vector>
#include <iostream>
using namespace std;

void set_matrix_zero(vector<vector<int>> vec)
{
    int row=vec.size();
    int col=vec[0].size();
    bool flag=true;
    for(int i=0;i<row;i++)
    {
        if(vec[i][0]==0)
            flag=false;
        for(int j=1;j<col;j++)
        {
            if(vec[i][j]==0)
            {
                vec[i][0]=vec[0][j]=0;
            }
        }
    }
    for(int i=row-1;i>=0;i--)
    {
        for(int j=col-1;j>=0;j--)
        {
            if(vec[i][0]==0||vec[0][j]==0)
                vec[i][j]=0;
        }
        if(flag==false)
            vec[i][0]=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout << vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>> vec{{1,1,1}, 
                            {1,0,1}, 
                            {1,1,1}};
    set_matrix_zero(vec);
    return 0;
}