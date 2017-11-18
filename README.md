GitDB
=====

Objective
---------

Have a simple set of files that correspond to the database schema at time T.
Having any change be recorded in a git-like manner, currently target storage is git, that stores only migrations.
Having sqldiff compute some migrations automatically, to let the user change the schema as a whole.
Compute the diff on

```
gitdb add
```

and ask for non automatically computable migration on

```
gitdb commit
```


Contribute
----------

If you ever want to contribute to this project, you can join me on http://phabricator.leclercq.site where
you'll gain access to my projects issue tracker/repository.
