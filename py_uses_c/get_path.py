from ctypes import CDLL, POINTER, c_int, c_float, byref

dll = CDLL('./libmypath.so')

xData = POINTER(c_float)()
yData = POINTER(c_float)()
actionData = POINTER(c_int)()
size = c_int()
x1 = 5.0
y1 = 10.0
dll.my_path(c_float(x1), c_float(y1), byref(size), byref(xData), byref(yData), byref(actionData))

for i in range(size.value):
    print i, xData[i], yData[i], actionData[i]

dll.cleanup(xData,yData,actionData)
