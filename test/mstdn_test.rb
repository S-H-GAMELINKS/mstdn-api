require "test_helper"
require "mstdn/mstdn"
require "dotenv"

Dotenv.load

class MstdnTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::Mstdn::VERSION
  end

  def test_init
    refute_nil Mstdn.new(ENV['DOMAIN'], ENV['TOKEN'])
  end

  def test_toot
    @mstdn = Mstdn.new(ENV['DOMAIN'], ENV['TOKEN'])
    assert @mstdn.toot("test").is_a?(String)
  end
end
