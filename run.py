import subprocess,os




args = [
    'g++',
    'src/*.cpp',
    '-L',
    'lib',
    '-I',
    'include',
    '-l',
    'SDL3',
    '-l',
    'SDL3_image',
    '-o',
    'build/RPG.exe'
]
#g++ src\*.cpp -L lib -I include -l SDL3 -l SDL3_image -o build\RPG.exe
# os.system("cls")
result = subprocess.run(args)

if result.returncode == 0:
    print('\n\nBuild succesful\n')
    print('Running exe file\n\n')
    subprocess.run('build/RPG.exe')
else:
    print('\n\nBuild unsuccesful\n')
