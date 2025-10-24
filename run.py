import subprocess


base_dir = 'C:\projects\CPP-RPG-code_along\repo.py'

args = [
    'g++',
    'src\*.cpp'
    '-L',
    'lib',
    '-I',
    'include',
    '-l',
    'SDL3',
    'SDL3_image',
    '-o',
    'build\RPG.exe'
]


subprocess.run(args)