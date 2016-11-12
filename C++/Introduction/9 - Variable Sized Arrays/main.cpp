	int n, // the number of variable-length arrays
		q, // the number of queries
		k, // size of each array
	    ans, 
        qloc, 
        z; 

	cin >> n >> q;
	int ** a = new int * [n]; 

	for (int i = 0; i < n; i++) {
		cin >> k;
        a[i] = new int [k];
		for (int j = 0; j < k; j++) {
			cin >> z;
            a[i][j] = z;
		}
	}

	for (int i = 0; i < q; i++) {
		cin >> qloc >> ans;
		cout << a[qloc][ans] << endl;
	}

}