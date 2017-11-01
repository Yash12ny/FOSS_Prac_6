#Program to find out Volume of Cube and Cyllinder

a=int(input("Enter the length of edge of cube : "))
r=int(input("Enter the radius of cylinder : "))
h=int(input("Enter the height of cylinder : "))

def VolCube():
    VolCube=a*a*a
    print("Volume of Cube : ",VolCube)

VolCube()

def VolCyllinder():
    VolCyllinder=3.14*r*r*h
    print("Volume of Cylinder : ",VolCyllinder)

VolCyllinder()
