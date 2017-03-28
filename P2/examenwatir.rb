# ruby watirtest.rb
require 'rubygems'
require 'watir'
browser = Watir::Browser.new
browser.goto 'https://goo.gl/mbfwZM'

# contar cosas
ariel = browser.elements(:xpath => "//*[contains(@data-item-id,'712386312')]/div[2]")
puts ariel.to_a.at(0).text.lines.count


# llenar formulario

browser.text_field(:name => 'entry.565481634').set 'Jaime Margolin'
browser.text_field(:name => 'entry.1599836428').set 'A0109332'


browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[3]/div[2]/div[3]/div/label/div/div[1]/div[2]').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[4]/div[2]/div/content/div/label[4]/div/div[1]/div[3]/div').click

browser.textarea(:name => 'entry.1943388466').set "Load testing is the process of putting demand on a software system or computing device and measuring its response. Load testing is performed to determine a system's behavior under both normal and anticipated peak load conditions."
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[6]/div[2]/div/content/div/label[2]/div/div[1]/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[7]/div[2]/div/content/div/label[4]/div/div[1]/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[8]/div[2]/div/content/div/label[1]/div/div[1]/div[3]/div').click

browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[2]/content/label[5]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[3]/content/label[2]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[4]/content/label[6]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[5]/content/label[5]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[6]/content/label[1]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[7]/content/label[3]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[8]/content/label[6]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[9]/content/label[2]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[10]/content/label[9]/div/div[3]/div').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[9]/div[2]/div[1]/div/div[11]/content/label[5]/div/div[3]/div').click

browser.textarea(:name => 'entry.2061122182').set 'all test are evaluated for true and false values if(condition){code block 1}else{code block 2}; both code blocks will be executed '

browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[11]/div[2]/div[1]/div[2]').click
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[2]/div[11]/div[2]/div[2]/div[3]').click

browser.textarea(:name => 'entry.980720621').set 'All the possible combinations of outcomes of conditions in a decision (therefore the complete decision table) are tested at least once. switch(option){case 1: code1; break; case2: code2; break; case3: code3; break;} all code 1,2,3 will execute'
browser.textarea(:name => 'entry.1285916526').set 'used to determine the stability of a system by overlaoding the system beyond normal conditions, normally until the system crashes'
browser.element(:xpath => '//*[@id="mG61Hd"]/div/div[2]/div[3]/div[1]/div/div').click


sleep(3)
browser.close