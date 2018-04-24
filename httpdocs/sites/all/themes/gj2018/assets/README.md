# Howto setup workflow

In this theme is using [Compass](http://compass-style.org/) based sass.
Compass version ~ 0.12 (See details in Gemfile). This version of Compass
will work on Ruby 2.1.

## Install Ruby and Compass

Easy way to install Ruby and required ruby gems is
[RVM](https://rvm.io/) (Ruby version manager).

To install RVM you can use this manual https://rvm.io/rvm/install

### Bundler
To manage  ruby gems on your environment please you [Bundler](http://bundler.io/)

You can simply install bundler with command:
```
cd  to/theme/assets
gem install bundler
```
To install all required gems please use follwing command to install
all required gems:
```
bundle install
```

### Compiling with Compass

After you get installed Ruby and all gems using bundler you can simply
compile/clear/watch your styles with command:
```
bundle exec compass compile
bundle exec compass clean
bundle exec compass watch

```

#### Development mode

By default compass setup to production mode.
You can enable line comments by copying `config.rb` file to
`dev_config.rb` and run compiling with flag -c
```
bundle exec compass compile -c dev_config.rb
```
