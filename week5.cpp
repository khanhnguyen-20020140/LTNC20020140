
int* getPointerToTen() {
    int* point = new int[1];
    point[0] = 10;
    return point;
}

//Bai 2
double* getPointerToPi() {
    double* point = new double;
    *point = 3.14159;
    return point;
}


//Bai 3
double* getSquare (double number) {
    double* point = new double;
    *point = number * number;
    return point;
}
