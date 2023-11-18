// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // map<string, double>mp{{"A", 3.75}, {"B+", 3.50}, {"B", 3.00}, {"C+", 2.50}, {"C", 2.00}, {"D+", 1.50}, {"D", 1.00}, {"F", 0}};
//     int n;cin>>n;
//     vector<double>v;
//     map<double, string>res;
//     double sum = 0;
//     while(n--){
//         string s;cin>>s;
//         string l;cin>>l;
//         string temp = s+" "+l;
//         int num;cin>>num;
//         sum = 0;
//         double cnt = 0;
//         for(int i = 0;i<num;i++){
//             string a;cin>>a;
//             int k;cin>>k;
//             cnt+=k;
//             if(a=="A+"){
//                 sum+=(4*k);
//             }
//             else if(a=="A"){
//                 sum+=(3.75*k);
//             }
//             else if(a=="B+"){
//                 sum+=(3.50*k);
//             }
//             else if(a=="B"){
//                 sum+=(3*k);
//             }
//             else if(a=="C+"){
//                 sum+=(2.5*k);
//             }
//             else if(a=="C"){
//                 sum+=(2*k);
//             }
//             else if(a=="D+"){
//                 sum+=(1.5*k);
//             }
//             else if(a=="D"){
//                 sum+=k;
//             }
//             else{
//                 sum+=0;
//             }
//         }
//         sum/=cnt;
//         v.push_back(sum);
//         res[sum] = temp;
//     }
//     sort(v.begin(), v.end());
//     for(int i = 0;i<v.size();i++){
//         cout<<res[v[i]]<<" "<<fixed<<setprecision(3)<<v[i]<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

struct Student{
    double gpa;
    string name;
    string surname;
};

bool cmp(Student student1, Student student2){
    if(student1.gpa == student2.gpa){
        if(student1.surname == student2.surname){
            return student1.name < student2.name;
        }
        return student1.surname < student2.surname;
    }
    return student1.gpa < student2.gpa;
}

int partition(vector <Student> &st, int low, int high){
    Student pivot = st[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(cmp(st[j],pivot) == true){
            i++;
            swap(st[j],st[i]);
        }   
    }
    swap(st[i+1], st[high]);
    return i + 1;
}

void quickSort(vector <Student> &st,int low, int high){
    if(low < high){
        int pi = partition(st,low, high);
        quickSort(st,low,pi - 1);
        quickSort(st,pi+1,high);
    }
}

int main(){
    int n; cin >> n;
    vector<Student> st(n);
    map<string, double> mp =  {
                               {"A+", 4.00},
                               {"A", 3.75},
                               {"B+", 3.50},
                               {"B", 3.00},
                               {"C+", 2.50}, 
                               {"C", 2.00}, 
                               {"D+", 1.50}, 
                               {"D", 1.00}, 
                               {"F", 0}
                               };
    // mp["A+"] = 4.0;
    // mp["A"] = 3.75;
    // mp["B+"] = 3.5;
    // mp["B"] = 3.0;
    // mp["C+"] = 2.5;
    // mp["C"] = 2.0;
    // mp["D+"] = 1.5;
    // mp["D"] = 1.0;
    // mp["F"] = 0;
    for(auto &student : st){
        cin >> student.surname >> student.name;
        int m; cin >> m;
        double sum = 0, sum1 = 0;
        while(m--){
            string mark; int credits;
            cin >> mark >> credits;
            sum += mp[mark] * credits;
            sum1 += credits;
        }
        student.gpa = sum/sum1;
    }
    quickSort(st, 0, st.size()-1);
    for(auto i : st){
        cout << i.surname << " " << i.name << " " << fixed << setprecision(3) << i.gpa << endl;
    }
}