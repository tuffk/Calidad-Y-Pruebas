require 'rubygems'
require 'watir'
browser = Watir::Browser.new
browser.goto 'https://www.reddit.com/login'

browser.text_field(:id => 'user_reg').set 'watir_ariel_test_XO'
browser.text_field(:id => 'passwd_reg').set 'Zain69!aa'
browser.text_field(:id => 'passwd2_reg').set 'Zain69!aa'
browser.text_field(:id => 'email_reg').set 'a466064@mvrht.net'
sleep(15)
# browser.element(:xpath => '//*[@id="recaptcha-anchor"]/div[5]' ).click
browser.element(:xpath => '//*[@id="register-form"]/div[8]/button').click

browser.close