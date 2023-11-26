Problem : Median of two sorted arrays

Input:
double median(vector<int>& a, vector<int>& b) {
	vector<int> c(a.size()+b.size());
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
	int n=c.size();
    if(n%2 == 0)
        return (c[n/2] + c[n/2-1])/2.0;
    else
    	return (c[n/2]);
}
