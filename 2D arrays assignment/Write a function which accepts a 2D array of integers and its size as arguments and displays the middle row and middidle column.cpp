#include<iostream>
using namespace std;

void arrays(int n, int m, int a[][4]) {
    cout << "Enter the elements in 2D array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
     cout << " elements entered in 2D array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout<<endl;
    }

    // Display the middle column and row elements
    cout << "Middle column and row elements: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j == m / 2 || i == n / 2) {
                cout << a[i][j] << " ";
            }
            else
            {
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}

int main() {
    int n, m;
    cout << "Enter the number of rows and columns respectively:";
    cin >> n >> m;
    int a[n][4]; 

    arrays(n, m, a);

    return 0;
}
