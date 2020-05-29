# given a list of strings delete all special chars in each one
#non alphanumeric chars
#this code is a variation of a code found in
#http://www.openbookproject.net/thinkcs/archive/python/spanish2e/cap07.html

#this function delete non alpha numeric chars in a word
def delete_nonalpha(s):
    non_alpha = "!#$&/(){}[]+*%<>=@¡|~½¬ª\\\""
    s_clean = ""  #sting without especial chars
    for letter in s:
        if letter not in non_alpha:
            s_clean += letter
    print(s_clean)

words = ["Gu@d@lup3","!BM","@ustr@/¡@","\\/erm@nt","C++","Comp<q"]
for j in words:
     print(j)
print()
print("the words clean are: ")
for i in words:
     delete_nonalpha(i)
