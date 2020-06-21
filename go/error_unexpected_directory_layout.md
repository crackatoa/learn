unexpected directory layout:
	import path: _/home/dmitry/go/src/github.com/incogbyte/shosubgo/apishodan
	root: /home/dmitry/go/src
	dir: /home/dmitry/go/src/github.com/incogbyte/shosubgo/apishodan
	expand root: /home/dmitry/go
	expand dir: /home/dmitry/go/src/github.com/incogbyte/shosubgo/apishodan
	separator: /

solution:

change 

import 
(
  "./models"
)

to 

import 
(
  "github.com/insanz01/server/models"
)
