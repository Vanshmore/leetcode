class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
     int circularCount = 0, squareCount = 0;
    for (int student : students) {
        if (student == 0) {
            circularCount++;
        } else {
            squareCount++;
        }
    }
    
    for (int sandwich : sandwiches) {
        if (sandwich == 0) {
            if (circularCount > 0) {
                circularCount--;
            } else {
                break;
            }
        } else {
            if (squareCount > 0) {
                squareCount--;
            } else {
                break;
            }
        }
    }
    
    return circularCount + squareCount;
   
    }
};