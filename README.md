# CS499DataStruct
   The artifact chosen is from my CS 405 class that I took in summer of 2020, where I was tasked to find and fix vulnerabilities in a program that calculated gas price based on the number of gallons input by the user. The price would vary depending on how much was used for example, up to 6000 gallons is $2.35 per thousand gallon and between 6000 and 20000 gallons is $3.75 per thousand gallons. The program uses if statements to determine how much to charge the user. Once the charge is calculated a standard fee is then applied to obtain the total. The total is then output to the user along with the gallons purchased. 

While this artifact originally had no data structures because it just output the price to the user, I saw it as an opportunity to add a data structure to record customer information. This information could then be used for data mining to expand the complexity of the program. The original code had no comments or descriptions of what was going on in the code. In addition, the gas calculator was part of a larger program, however I isolated it for my selection and because of that I had to implement a new user interface. The new interface I implemented was simple with three options, use the calculator, access the customer list or exit the program. Finally, to have the ability to record a customer list I added lines of code inside the gas calculator that opens a .txt file, then appends to that file the customer name, gallons purchased and price they paid. The amount of customer information can be expanded easily if a business wanted to gather more information on their customers such as location, gender or age. This information is output to the user from the console and saved into a .txt file. When the user wants to access the customer list, the program opens that .txt file and parses each line to the console. 

My goal for these enhancements was to add comments to improve readability and to add a way to record and export customer information to be used for data mining in the future. I was successful in all my goals and I was able to improve readability by adding a description of the code at the top of the page. I also was able to add code to record customer data and then record that data in a .txt file to be used for data mining. I also realized that I needed to update my goals as I was working on the enhancements because at first, I didn’t realize I needed to make a new user interface. 

This set of enhancements made me realize I need to be flexible when I am improving a project. When I first started working on exporting the customer information, I wanted to export directly into an Excel file. However, each time I tried that the data would be corrupted when I try to access that Excel file. To fix this issue I exported the information to a .txt file that can be opened in Excel and Excel will import the data from the .txt file. I also learned that a program without any comments can be confusing to someone who did not write the code. Short descriptive comments can be very useful with telling the reader what each part of the code does without creating clutter. 
