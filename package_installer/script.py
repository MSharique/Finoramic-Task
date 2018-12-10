# To execute this script, please provide the input file as command line parameter
# for ex: python3 script.py packages.txt 

def main(argv):
    try:
        filename = argv
    except IndexError:
        print("Invalid file: Please check the file")
    else:
        import pip
        retcode = 0
        with open(filename, 'r') as f:
            for line in f:
                if "==" in line.strip():
                    pipcode = pip.main(['install', line.strip()[:-1]])
                    retcode = retcode or pipcode
        return retcode

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv[1]))