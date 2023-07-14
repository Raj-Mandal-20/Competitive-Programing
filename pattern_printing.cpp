#include <bits/stdc++.h>

using namespace std;

void solidRectangle(int x, int y){
	// take argumnet row =x & column = y
	for(int row=1; row<=x; row++){
		for(int col=1; col<=y; col++ ){
			cout << "* ";
		}
		cout << "\n";
	}

}


void hollowRectangle(int x, int y){
	for(int row=1; row<=x; row++){
		if(row == 1 || row == x){
			for(int col=1; col<=y; col++){
				cout << "* ";
			}
		}
		else{
			for(int col=1; col<=y; col++){
				if(col==1 || col == y) cout << "* ";
				else cout << "  ";
			}
		}
		cout << "\n";

	}
}

void halfPiramid(int x){
	for(int row=1; row<=x; row++){
		for(int col=1; col<=row; col++){
			cout << "X ";
		}
		cout << "\n";
	}
}

void halfPiramidInverted(int x, string pattern){
	for(int row=1; row<=x; row++){
		for(int col=x; col>=row; col--){
			cout << pattern;
		}
		cout << "\n";
	}
}


void hollowInvertedHalfPiramid(int x){

	for(int row=1; row<=x; row++){
		if(row == 1 || row == x) {
			for(int col = x; col >=row; col--){
				cout << "U ";
			}
		}
		else{
			for(int col = x; col >=row; col--){
				if(col == x || col == row ) cout << "U ";
				else cout << "  ";
			}
		}
		cout << "\n";
	}
}

void fullPiramid(int x){
	// we also need a inverted half piramid with empty charecter
	for(int row=1; row<=x; row++){
		// for spaceing
		for(int i=1; i<=5; i++) cout << " ";

		// half empty inverted piramid
		for(int col=x; col-1>=row;  col--){
			cout << " ";
		}
		// piramid
		for(int col=1; col<=row; col++){
			cout << "Y ";
		}
		cout << "\n";
	}

}

void invertedFullPiramid(int x)
{

	for(int row=1; row<=x; row++){
		for(int i=1; i<=5; i++) cout<<" ";
		for(int col=1; col<=row-1; col++) cout << " ";
		for(int col=x; col>=row; col--) cout << "# ";
		cout <<"\n";
	}
}

int fullHollowPiramid(int x){
	for(int row=1; row<=x; row++){
		// some spacing
		for(int i=1; i<=5; i++) cout << " ";
		for(int col=x; col-1>=row; col--){
			cout << " ";
		}
		for(int col = 1; col<=row; col++){

			if(row == 1 || row == x){
				cout << "U ";
			}
			else {
				if(col == 1 || col == row) cout << "U ";
				else cout << "  ";
			}
			
		}
		cout << "\n";
		
		
	}
}

void solve(){

	// string pattern;
	int x, y;
	cin >> x;
	// cin >> y;

	// solidRectangle(x, y);
	// hollowRectangle(x, y);
	// halfPiramidInverted(x);
	// hollowInvertedHalfPiramid(x);
	// fullPiramid(x);
	// invertedFullPiramid(x);
	fullHollowPiramid(x);
}


int main(){
	
	int tc=1;
	// cin >> tc;
	while(tc--){
		solve();
	}
	return 0;
}
