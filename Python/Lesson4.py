# Area of a Circle
import math  # Import the math library so that we can use constant pi
raduis = float(input("Enter the raduis: ")) # Get the raduis
area = math.pi * raduis**2  # Compute the area
print("The circle area of the circle is ", round(area, 2)) # display the area 
# Round is a build in function. In the particular case, the function takes the value of area and returns that value rounded to the nearest numbers wiht decimal places.