int func(const vector<int>& v, int hourly) {
    int hours = 0;
    for (int i = 0; i < v.size(); i++) {
        hours += ceil((double)v[i] / (double)hourly); // Efficient ceiling division using integer arithmetic
    }
    return hours;
}

int minimumRateToEatBananas(vector<int>& v, int h) {
    int low = 1; 
    int high = *max_element(v.begin(), v.end()); // The max element is the upper bound for binary search
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        int hours = func(v, mid);

        // Check if the current rate allows the monkey to eat all bananas within 'h' hours
        if (hours > h) {
            low = mid + 1; // Mid is too small, increase the lower bound
        } else {
            high = mid; // Mid is sufficient, try to find a smaller sufficient rate
        }
    }
    return low;
}
