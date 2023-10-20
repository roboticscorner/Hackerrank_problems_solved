#include<bits/stdc++.h>

using namespace std;

struct Workshop {
    int start_time;
    int end_time;
    int duration;
};

struct Available_Workshops {
    int n;
    vector<Workshop> workshops;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* availableWorkshops = new Available_Workshops;
    availableWorkshops->n = n;
    
    for (int i = 0; i < n; i++) {
        Workshop workshop;
        workshop.start_time = start_time[i];
        workshop.duration = duration[i];
        workshop.end_time = start_time[i] + duration[i];
        availableWorkshops->workshops.push_back(workshop);
    }
    
    return availableWorkshops;
}

bool compareWorkshops(const Workshop& a, const Workshop& b) {
    return a.end_time < b.end_time;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    sort(ptr->workshops.begin(), ptr->workshops.end(), compareWorkshops);
    
    int maxWorkshops = 0;
    int currentEnd = 0;
    
    for (int i = 0; i < ptr->n; i++) {
        if (ptr->workshops[i].start_time >= currentEnd) {
            maxWorkshops++;
            currentEnd = ptr->workshops[i].end_time;
        }
    }
    
    return maxWorkshops;
}

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    
    int start_time[n];
    int duration[n];
    
    for (int i = 0; i < n; i++) {
        cin >> start_time[i];
    }
    
    for (int i = 0; i < n; i++) {
        cin >> duration[i];
    }
    
    Available_Workshops* ptr = initialize(start_time, duration, n);
    int maxWorkshops = CalculateMaxWorkshops(ptr);
    cout << maxWorkshops << endl;
    
    return 0;
}

