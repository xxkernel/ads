int kmp(string s, string t){
//     vector<int> v = lps_prefix(s);
//     int cnt = 0;
//     int i = 0;
//     int j = 0;
//     while(i<s.size() && j<t.size()){
//         if(s[i]==t[j]){
//             j++;
//             i++;
//             if(j==t.size()){
//                 cnt++;
//                 j = v[j-1];
//             }
//         }
//         else{
//             if(j!=0){
//                 j = v[j-1];
//             }
//             else{
//                 i++;
//             }
//         }
//     }
//     return cnt;
// }