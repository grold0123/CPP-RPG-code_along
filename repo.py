import subprocess,os


os.system("cls")

args = [
    ('\n\ngit add:\n\n',['git','add','C:\projects\CPP-RPG-code_along']),#add
    ('\n\ngit commit:\n\n',['git','commit','-m','update']),#commit
    ('\n\ngit push:\n\n',['git','push']),#push
]

for prompt,arg in args:
    print(prompt)    
    subprocess.run(arg)
    print('\nSuccesful')