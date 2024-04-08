int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int students_count = studentsSize;
    int cir=0,sqr=0;
    for(int i=0;i<studentsSize;i++){
        if(students[i]==0){
            cir++;
        }
        else{
            sqr++;
        }
    }
    for(int i=0;i<sandwichesSize;i++){
        if(sandwiches[i]==0){
            if(cir>0){
                cir--;
                students_count--;
            }
        else{
            return students_count;
        }
        }
        else{
            if(sqr>0){
                sqr--;
                students_count--;
            }
            else{
                return students_count;
            }
        }
    }
    return 0;
}
