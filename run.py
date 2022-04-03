import os

def main():
    os.system('mkdir -p autosave')
    os.system('g++ save.cpp -o save')
    os.system('./save')
    
    os.system('cd autosave')
    os.system('git add vimrc')
    os.system('git commit -m "autosave"')

if __name__ == '__main__':
    main()