Import("env")
print("Replace MKSPIFFSTOOL with mklittlefs.exe")
env.Replace (MKSPIFFSTOOL = "tools/mklittlefs.exe")