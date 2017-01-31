def f():
    tmp = ''.join([ chr(ord(e) + 3) for e in ['^',
     '4',
     'K',
     'i',
     '.',
     '/',
     'N',
     'j',
     'P',
     'o',
     '?',
     'l',
     '2',
     'T',
     '?'] ])
    passwd = raw_input('You pass:')
    if passwd == tmp:
        print ''.join([ e.decode('ROT13') for e in ['A',
         'G',
         'U',
         'H',
         '_',
         'V',
         'F',
         '{',
         'F',
         'a',
         'n',
         'x',
         'r',
         '_',
         'F',
         'a',
         'n',
         'p',
         'x',
         '}'] ])
    else:
        print 'No :('

import marshal
code = marshal.dumps(f.__code__)
code2 = code.encode('base64')
print(code2)
