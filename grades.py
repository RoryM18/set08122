#initalise array
grades = [56,51,67,43,51,55];

#Create another array
grades2 = [78,55,51]*len(grades);

#Copying all elements of one array into another
for i in range(0,len(grades)):
    grades2[i] = grades[i];

#Displaying elements of array1
print("First year grades: ");
for i in range(0,len(grades)):
    print(grades[i]),

print();

#Displaying elemetns of array 2
print("First and second year grades");
for i in range(0,len(grades2)):
    print(grades2[i], "Student 40492068"),
    
