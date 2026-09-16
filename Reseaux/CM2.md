- enable secret/passwd (secret crypte)
- mdp console
```
line console 0
password ****
login
```
```
line vty 04/015
password *****
login
```
- 04/015 = nbr de connections en simultanee
```
service password encryption
```
```
show running-config
```
nvram = ram non-volatile
startup config = nvram
running config =ram
```
copy running-config starting-config
```
user >
root \#
commutateur (switch) = usage simple
routeur = config requise

```
no shutdown
```
# Protocoles
passerelle par defaut (premier routeur avant sortie de reseau)
 x.x.x.x/26 masque prefixe
 masuqe en decimale pointee
 1111 1111 1111 1111 1111 1100 0000
 255.255.255.192