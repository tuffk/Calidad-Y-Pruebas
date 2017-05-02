require 'rubygems'
require 'watir'
browser = Watir::Browser.new
browser.goto 'https://www.reddit.com/login'

browser.text_field(:id => 'user_login').set 'watir_ariel_test_XO'
browser.text_field(:id => 'passwd_login').set 'Zain69!aa'

browser.element(:xpath => '//*[@id="login-form"]/div[5]/button').click
sleep(6)

browser.element(:xpath => '/html/body/div[3]/div[4]/div/div/a').click
browser.textarea(name: 'title').set 'watir test post'
browser.text_field(id: 'sr-autocomplete').set 'watir'
sleep(15)

browser.button(name: 'submit').click
sleep(4)
browser.close