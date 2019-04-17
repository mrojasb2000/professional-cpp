void addOne(int i){
     i++; // Has no real effect because this is a copy of the original
}

void addOneRef(int& i){
    i++; // Actually changes the original variable
}